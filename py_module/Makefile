.PHONY: all
all:
	python3 setup.py build_ext --inplace

.PHONY: install
install:
	python setup.py bdist_wheel

.PHONY: remove
remove:
	# python3 setup.py build_ext --inplace
	echo "pyremove"

.PHONY: clean
clean:
	rm _myre2*
	rm myre2_wrap.cpp
	rm myre2.py
	rm -rf __pycache__/
	rm -rf build/
	rm -rf dist/