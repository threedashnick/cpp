#include <iostream>
using namespace std;

int main() {
	int g = 10; // создание переменной Integer равное 10
	cout << "Hi all!";
	int a, b; // создаем две переменные
	cin >> a >> b; // принимаем через ввод два числа (с пробелом вежду ними) и замисываем их в две переменные
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b; // создание переменной Integer равное 10
	return 0;
	// это комментарий, здесь можно писать пояснения
}

int main() {
	int n;
	cin >> n;
	cout << n % 10;
	return 0;
	// способ узнать последнюю цифру из числа
}

int main() {
	int n;
	cin >> n;
	cout << n % 10 + (n / 10) % 10 + n / 100;
	return 0;
	// сложить отдельные цифры трехзначного числа
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    cout << (a*100 + b)*n / 100 << " " <<(a*100 + b)*n % 100;
    return 0;
	// Пирожок стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков. Программа должна вывести два числа через пробел: стоимость покупки в рублях и копейках
}

int main() {
    int n;
    cin >> n;
    cout <<(n/3600)%24<<":"<<(n%3600)/600<<((n%3600)%600)/60<<":"<<(((n%3600)%600)%60)/10<<((((n%3600)%600)%60)%10);
    // вначале смотрим сколько целых часов в данном количестве секунд (3600 секунд в одном часе), затем смотрим сколько десятиминуток в остатке от деления целых часов в данном количестве секунд итд
    return 0;
}

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    cout << (h2*3600+m2*60+s2) - (h1*3600+m1*60+s1);
    //сколько секунд прошло между двумя моментами времени
    return 0;
}

int main() {
    int v,t;
    cin >> v >> t;
    cout << (109 + (v*t)%109) % 109;
	// мкад 109км, байкер стартанул с 0км. если скорость отрицательная - то едет пчс. 
	// cout << (v*t)%109; если бы не учет движения пчс то такого решения было бы достаточно
    return 0;
}

int main() {
    int t;
    cin >> t;
    // cout << t/1000 << " " << (t%1000)/100 << " " <<  (t%100)/10 << " " <<  t%10; // числа разобраны по-порядку
    cout << ((t/1000)+1) % ((t%10)+1) + (((t%1000)/100)+1) % (((t%100)/10)+1) + 1;
	// проверка числа на палиндром
    return 0;
}


///////////// условный оператор////////

int main() {
	int a;
	cin >> a;
	if (a > 0) {
	    cout << a;
	} else {
	    cout << -a;
	}
}

int main() {
  int fi, se;
  cin >> fi >> se;
  if (fi > se) {
      cout << fi;
  } else if (se > fi) {
      cout << se;
  } else {
      cout << se;
  }
  return 0;
} 
// выводит бОльшее из двух чисел

int main() {
  int fi, se, th;
  cin >> fi >> se >> th;
  if ((fi >= se) && (fi >= th)) {
      cout << fi;
  } else if ((se >= fi) && (se >= th)) {
      cout << se;
  } else {
      cout << th;
  }
  return 0;
}
// определяет наибольшее из трех


