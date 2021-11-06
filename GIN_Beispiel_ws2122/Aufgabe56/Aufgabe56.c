

struct ZylinderDimensionen {
	double radius;
	double hoehe;
};

int main(int argc, char **argv) {
	struct ZylinderDimensionen zylinder;

	zylinder = eingabe();
	double volumen = berechnung(zylinder);
	ausgabe(volumen);
}
