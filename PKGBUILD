pkgname=bundle
pkgver=1.4
pkgrel=1
pkgdesc="Bundle"
arch=('any')
url="https://github.com/dawidd6/bundle"
license=('BSD')
provides=()
conflicts=()
depends=()
optdepends=()
makedepends=()
source=("http://github.com/dawidd6/bundle/archive/$pkgver.tar.gz")
md5sums=('SKIP')

build()
{
	cd "$srcdir/$pkgname-$pkgver"
	make
}

package()
{
	cd "$srcdir/$pkgname-$pkgver"
	mkdir -p $pkgdir/usr/bin
	make DESTDIR="$pkgdir/usr/bin" install
}
