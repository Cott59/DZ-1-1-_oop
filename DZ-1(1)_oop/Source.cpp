#include <iostream>



class Shot {
private:
	int _Numerator;
	int _Denominator;

public:
	Shot(int numerator, int denominator) : _Numerator(numerator), _Denominator(denominator) {}

	void SetNumerator(int numerator) {
		_Numerator = numerator;
	}
	void SetDenominator(int denominator) {
		_Denominator = denominator;
	}
	int WholePart() {
		return (_Numerator / _Denominator);
	}
	int Fraction() {
		return (_Numerator % _Denominator);
	}
	void Reciprocal() {
		int Re_numerator, Re_denominator;
		Re_numerator = _Denominator;
		Re_denominator = _Numerator;
		std::cout << "Re_numerator:" << Re_numerator << '\n' << "Re_denominator:" << Re_denominator << '\n';
	}
	void MinShot() {
		for (int i = 10; i >= 1; --i)
			if (_Numerator % i == 0 && _Denominator % i == 0) {
				_Numerator /= i;
				_Denominator /= i;
				return;
			}
	}

	Shot operator -() {
		_Numerator *= -1;
		return  *this;
	}

	Shot operator +(int data) {
		data *= 1;
		return  *this;
	}

	void ShowShot() {
		std::cout << "numerator:   " << _Numerator << '\n';
		std::cout << "denominator: " << _Denominator << '\n';
	}



};





int main() {
	setlocale(LC_ALL, "Russian");

	// חאהאקא 1 הנמבü
	Shot a(17, 4);
	a.ShowShot();
	a.MinShot();
	a.ShowShot();
	Shot b(21, 9);
	b.ShowShot();
	b.MinShot();
	b.ShowShot();
	//a.SetNumerator(23);
	//a.ShowShot();





	return 0;
};