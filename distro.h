// Arch-based

#if D_arch
#define PKG_DIR "/var/lib/pacman/local"
#define PKG_MANAGER "Pacman"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/arch.txt"
#endif

#if D_manjaro
#define PKG_DIR "/var/lib/pacman/local" // /var/lib/pacman ?
#define PKG_MANAGER "Pacman"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/manjaro.txt"
#endif

#if D_garuda
#define PKG_DIR "/var/lib/pacman/local" // /var/lib/pacman ?
#define PKG_MANAGER "Pacman"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/garuda.txt"
#endif

#if D_endeavouros
#define PKG_DIR "/var/lib/pacman/local"
#define PKG_MANAGER "Pacman"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/endeavouros.txt"
#endif

#if D_gentoo
#define PKG_DIR "/var/db/pkg"
#define PKG_MANAGER "Portage"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/gentoo.txt"
#endif

// Apt 

#if D_debian
#define PKG_DIR "/var/lib/dpkg/info"
#define PKG_MANAGER "Apt"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/debian.txt"
#endif

#if D_kali
#define PKG_DIR "/var/lib/dpkg"
#define PKG_MANAGER "APT"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/kali.txt"
#endif

#if D_mint
#define PKG_DIR "/var/lib/dpkg/info" // /var/lib/dpkg ?
#define PKG_MANAGER "Apt"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/mint.txt"
#endif

#if D_ubuntu
#define PKG_DIR "/var/lib/dpkg/info"
#define PKG_MANAGER "Apt"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/ubuntu.txt"
#endif

#if D_fedora
#define PKG_DIR "/var/lib/dnf/"
#define PKG_MANAGER "DNF"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/fedora.txt"
#endif

#if D_centos
#define PKG_DIR "/var/lib/yum/"
#define PKG_MANAGER "YUM"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/centos.txt"
#endif

#if D_opensuse
#define PKG_DIR "/var/lib/rpm"
#define PKG_MANAGER "Zypper"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/opensuse.txt"
#endif

#if D_macos
#define PKG_DIR "/usr/local/Cellar"
#define PKG_MANAGER "Homebrew"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/mac.txt"
#endif

#if D_android
#define PKG_DIR "/data/data"
#define PKG_MANAGER "APM"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/android.txt"
#endif

#if D_alpine
#define PKG_DIR "/var/cache/apk" // "/var/lib/apk"?
#define PKG_MANAGER "Apk"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/alpine.txt"
#endif

// BSD

#if D_openbsd
#define PKG_DIR "/var/db/pkg"
#define PKG_MANAGER "pkg_add"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/openbsd.txt"
#endif

#if D_freebsd
#define PKG_DIR "/var/db/pkg"
#define PKG_MANAGER "pkg"
#define ASCII_ART_PATH "/usr/share/foofetch/ascii/freebsd.txt"
#endif