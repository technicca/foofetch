#define COLOR "\e[1;36m"

#define CONFIG \
{ \
   /* name            function                 cached */\
    { "",             get_title,               false }, \
    { "",             get_bar,                 false }, \
    { "OS: ",         get_os,                  true  }, \
    { "Host: ",       get_host,                false  }, \
    { "Kernel: ",     get_kernel,              false  }, \
    { "Uptime: ",     get_uptime,              false }, \
    { "Packages: ",   get_packages,            false }, \
    { "Shell: ",      get_shell,               false }, \
    { "Resolution: ", get_resolution,          false }, \
    { "Terminal: ",   get_terminal,            false }, \
    { "CPU: ",        get_cpu,                 true  }, \
    { "GPU: ",        get_gpu1,                true  }, \
    { "GPU 2: ",      get_gpu2,                true  }, \
    { "Memory: ",     get_memory,              false }, \
    { "Disk: ",       get_disk_usage_root,     false }, \
    { "",             get_colors1,             false }, \
    { "",             get_colors2,             false }, \
}

#define CPU_CONFIG \
{ \
   REMOVE("(R)"), \
   REMOVE("(TM)"), \
   REMOVE("Dual-Core"), \
   REMOVE("Quad-Core"), \
   REMOVE("Six-Core"), \
   REMOVE("Eight-Core"), \
   REMOVE("Core"), \
   REMOVE("CPU"), \
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), \
}
