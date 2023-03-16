# setup.py
from distutils.core import setup, Extension

setup(name='myre2',
      version="0.1",
      ext_modules=[
        Extension('_myre2',
                  ['myre2.i'],
                  include_dirs = ["../"],
                  library_dirs = ["obj/so"],
                  libraries = ['re2'],
                  swig_opts=['-c++'],
                  runtime_library_dirs=['../obj/so'],
                  extra_objects=['../obj/libre2.a'],
                  extra_compile_args=["-fPIC"]
                  )
        ]
)