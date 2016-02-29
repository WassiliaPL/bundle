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
makedepends=('git')
source=("$pkgname"::'git+https://github.com/dawidd6/bundle.git#branch=master')
md5sums=('SKIP')

build()
{
	cd "$srcdir/$pkgname"
	make
}

package()
{
	cd "$srcdir/$pkgname"
	mkdir -p $pkgdir/usr/local/bin
	make DESTDIR="$pkgdir/usr/local/bin" install
}
