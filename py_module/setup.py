# setup.py
from setuptools import setup, Extension

setup(name='myre2',
      version="0.2",
      description="google-re2 wrapper for DFA graph",
      py_modules=["myre2"],
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