UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
    DISTRO=$(shell . /etc/os-release; echo "-D 'distro=\"$$NAME\"' -DD_$$ID")
endif
ifeq ($(UNAME_S),Darwin)
    DISTRO_NAME=$(shell sw_vers -productName)
    DISTRO_VERSION=$(shell sw_vers -productVersion)
    DISTRO=$(shell echo "-D 'distro=\"$(DISTRO_NAME) $(DISTRO_VERSION)\"'")
endif

CFLAGS=-O2 -Wall -Wextra -lX11 -lpci $(CCFLAGS)
PREFIX=$(HOME)/.local
CACHE=$(shell if [ "$$XDG_CACHE_HOME" ]; then echo "$$XDG_CACHE_HOME"; else echo "$$HOME"/.cache; fi)
all: foofetch

clean:
	rm -f foofetch $(CACHE)/foofetch

foofetch: foofetch.c foofetch.h config.h distro.h
	$(eval battery_path := $(shell ./utils/battery_id.sh))
	$(CC) foofetch.c -o foofetch $(CFLAGS) $(DISTRO) -D $(battery_path)
	strip foofetch

install: foofetch
	mkdir -p $(PREFIX)/bin
	install ./foofetch $(PREFIX)/bin/foofetch
	sudo mkdir -p /usr/share/foofetch/ascii/
	sudo cp -r ascii/. /usr/share/foofetch/ascii/
