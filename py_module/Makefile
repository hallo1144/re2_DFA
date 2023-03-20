.PHONY: all
all:
	python3 setup.py build_ext --inplace

.PHONY: install
install: myre2.py
	pip3 install .

.PHONY: uninstall
uninstall:
	pip3 uninstall myre2 -y

.PHONY: remove
remove: uninstall

.PHONY: clean
clean:
	rm _myre2*
	rm myre2_wrap.cpp
	rm myre2.py
	rm -rf __pycache__/
	rm -rf build/
	rm -rf dist/