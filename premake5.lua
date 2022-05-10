-- premake5.lua
workspace "cutils"
    configurations { "Debug", "Release" }

project "cutils"
    kind "ConsoleApp"
    toolset "clang"
    language "C"
    cdialect "gnu11"
    targetdir "build/bin/%{cfg.buildcfg}"
    objdir "build/obj/%{cfg.buildcfg}"

    files { 
        "*.h", 
        "main.c",
        "src/*c"
        --"thirdparty/fnv/src/*.c"  
    }

    links{"check"}
    includedirs{
        "include"--,
        --"thirdparty/fnv"
    }

    filter "system:windows"
        includedirs{
            "C:/Program Files (x86)/Check/include" 
        }
        libdirs{
            "C:/Program Files (x86)/Check/lib"
        }

    filter "system:linux"
        --defines {"_POSIX_C_SOURCE=199309L"}

    filter "configurations:Debug"
        defines { "DEBUG"}
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"
