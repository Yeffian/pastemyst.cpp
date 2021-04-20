workspace "pastemyst.cpp"
    configurations
    {
        "Debug",   -- Debugging
        "Release", -- Internal testing
        "Dist"     -- Final distrubutions
    }

    platforms
    {
        "x64",
        "x86",
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.architecture}"

  project "pastemyst"
      location "pastemyst.cpp"
      kind "StaticLib"
      language "C++"

      cppdialect "C++11"
      staticruntime "on"
      systemversion "latest"

      targetdir ("bin/" .. outputdir .. "/%{prj.name}")
      objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

      files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.hpp", "%{prj.name}/src/**.cpp" }
      includedirs { "%{prj.name}/include"  }
