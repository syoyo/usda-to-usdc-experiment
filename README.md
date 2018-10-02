# USDA to USDC conversion experiment in C++

## Why?

We want to create USDZ for iOS AR app on Linux.
USDZ is composed of USDC(binary format of USD) and assets(e.g. textures). 

USD build with python module simply failed on Ubuntu 16.04, thus use C++ API for creating USDC from USDA.

## How to build USD

Build USD with minimal dependency(boost and TBB only)
`build_usd.py` automatically downloads boost and TBB.

First run(boost build) fails but apparently build itself went well. Thus run build script twice.

In USD repo,

```
$ python2 build_scripts/build_usd.py --no-python --no-ptex --no-usdview --no-embree --no-alembic --no-hdf5 --no-maya --no-katana --no-houdini --no-docs --no-imaging --no-openimageio $HOME/local/USD
$ python2 build_scripts/build_usd.py --no-python --no-ptex --no-usdview --no-embree --no-alembic --no-hdf5 --no-maya --no-katana --no-houdini --no-docs --no-imaging --no-openimageio $HOME/local/USD
```

## Conversion example.

main.cc : This is based on `usdcat` script(Python) in USD repo.

## TODO

* [ ] File size check
* [ ] Convert glTF model using TinyGLTF(glTF -> USDA -> USDC).

## License

MIT license.
