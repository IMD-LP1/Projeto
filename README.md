# E-Commerce


# Dependencias 

## [MySQL]()

Para instalar use:

```
sudo apt-get install libmysqlclient-dev
```
Flag para compilar:

``` -lmysqlcppconn ```

## [Libharu](http://libharu.org):

Para instalar use:
```
tar -xvzf libharu-X.X.X.tar.gz
cd libharu-X.X.X
./configure [--prefix=/usr/local] [--with-zlib] [--with-png] [--with-libdir=lib]
make clean
make
make install
```
Flag para compilar:
```
-lhpdf -lpng -lm
```