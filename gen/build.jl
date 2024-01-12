using CxxWrap
using HepMC3_jll

#---Build the wrapper library----------------------------------------------------------------------
builddir = joinpath(@__DIR__, "build")
sourcedir = @__DIR__
cd(@__DIR__)

if Sys.isapple()
    ENV["SDKROOT"]=readchomp(`xcrun --sdk macosx --show-sdk-path`)
end

cxxwrap_prefix = CxxWrap.prefix_path()
hepmc3_prefix = HepMC3_jll.artifact_dir

run(`cmake -DCMAKE_BUILD_TYPE=Release
           -DCMAKE_PREFIX_PATH=$cxxwrap_prefix\;$hepmc3_prefix -S $sourcedir -B $builddir`)
run(`cmake --build $builddir --config Release --parallel 8`)
