from conans import ConanFile, CMake

class BoostConan(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   
   generators = "cmake"
   
   default_options = {"boost:shared": True}

   requires = ("boost/1.73.0") # comma-separated list of requirements
   
   build_requires = (
      "gtest/[>=1.8.0]"
   )

   def imports(self):
      self.copy("*.dll", dst="bin", src="bin") # From bin to bin
      self.copy("*.dylib*", dst="bin", src="lib") # From lib to bin
      self.copy("*.so*", dst="bin", src="lib") # From lib to bin
   
   def build(self):
      cmake = CMake(self)
      cmake.configure()
      cmake.build()