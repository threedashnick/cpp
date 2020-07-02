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

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if ( ((a+b)>c) && ((a+c)>b) && ((c+b)>a) ) {
      cout << "YES";  
  } else {
      cout << "NO";
  }
  return 0;
}
// проверка на существование треугольника с такими сторонами

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if (a==b && b==c) {
      cout << 3;
  } else if (a!=b && b!=c && a!=c) {
      cout << 0;
  } else {
      cout << 2;
  }
  return 0;
}
// сколько из предложенных трех чисел совпадают

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if ( (a != c) && (b == d)) {
      cout << "YES";
  } else if ( (a == c) && (b != d)) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
} //Шахматная ладья ходит по горизонтали или вертикали

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if ( ( (a==(c+1)) || (a==c) || (a==(c-1)) ) && ( (b==(d+1)) || (b==d) || (b==(d-1)) ) ) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
}     //Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку.


int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if ( ((a-c)==(b-d)) || ((c-a)==(b-d)) || ((c-a)==(d-b)) || ((a-c)==(d-b)) ) {
      cout << "YES";
  } else {
      cout << "NO";
  }      
  return 0;
}  // Шахматный слон ходит по диагонали

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if ( ((a-c)==(b-d)) || ((c-a)==(b-d)) || ((c-a)==(d-b)) || ((a-c)==(d-b)) ) {
      cout << "YES";
  } else if  ( ( (a!=c) && (b==d) ) || ((a==c)&&(b!=d)) ) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
} //Шахматный ферзь ходит по диагонали, горизонтали или вертикали.

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if ( ((a-c)==(b-d)) || ((c-a)==(b-d)) || ((c-a)==(d-b)) || ((a-c)==(d-b)) ) {
     cout << "NO";
  } else if  ( ( (a!=c) && (b==d) ) || ((a==c)&&(b!=d)) ) {
     cout << "NO";
  } else if ( ((a-c)>2) || ((c-a)>2) || ((b-d)>2) || ((d-b)>2) ) {
     cout << "NO";
  } else {
     cout << "YES"; 
  }
  return 0;
} // определение ходо коня (дурацкий, потому что сделан исходя из инверсии ходов слона)



int main() {
  int n,m,x,y;
  cin >> n >> m >> x >> y;
  if (m > n) {
      if ((n-x)<x) {
          if ((m-y) < y) {
              if ((n-x) < (m-y)) {
                  cout << (n-x);
              } else {
                  cout << (m-y); 
              }
          } else {
              if ((n-x) < y) {
                  cout << (n-x);
              } else {
                  cout << y; 
              } 
          }          
      } else {
          if ((m-y) < y) {
              if (x < (m-y)) {
                  cout << x;
              } else {
                  cout << (m-y); 
              }
          } else {
              if (x < y) {
                  cout << x;
              } else {
                  cout << y; 
              } 
          }     
      }    
  } else {
            if ((m-x)<x) {
          if ((n-y) < y) {
              if ((m-x) < (n-y)) {
                  cout << (m-x);
              } else {
                  cout << (n-y); 
              }
          } else {
              if ((m-x) < y) {
                  cout << (m-x);
              } else {
                  cout << y; 
              } 
          }          
      } else {
          if ((n-y) < y) {
              if (x < (n-y)) {
                  cout << x;
              } else {
                  cout << (n-y); 
              }
          } else {
              if (x < y) {
                  cout << x;
              } else {
                  cout << y; 
              } 
          }     
      }   
  }   
  return 0;
} // плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, 
//что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) 
//и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if ((a<b) && (a<c)) {
      cout << a << " ";
      if (b < c){
          cout << b << " " << c;
      } else {
          cout << c << " " << b;
      }
  } else if ((c<b)&&(c<b)) {
      cout << c << " ";
      if (a < b){
          cout << a << " " << b;
      } else {
          cout << b << " " << a;
      }
  } else {
      cout << b << " ";
      if (a < c){
          cout << a << " " << c;
      } else {
          cout << c << " " << a;
      }
  }
  return 0;
} // расположитьтри чмсла по порядку






//Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. 
//Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
int main() {
  int a1,b1,c1,a2,b2,c2;
  int min1,min2,max1,max2,mid1,mid2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    
 // поиск минимальной стороны 1ой коробки
    if ((a1<b1)&&(a1<c1)) {
        min1 = a1;    
    } else if ((b1<a1)&&(b1<c1)) {
        min1 = b1;
    } else {
        min1 = c1;
    } 
    
 // поиск минимальной стороны 2ой коробки
    if ((a2<b2)&&(a2<c2)) {
        min2 = a2;    
    } else if ((b2<a2)&&(b2<c2)) {
        min2 = b2;
    } else {
        min2 = c2;
    } 

 // поиск максимальной стороны 1ой коробки
    if ((a1>b1)&&(a1>c1)) {
        max1 = a1;    
    } else if ((b1>a1)&&(b1>c1)) {
        max1 = b1;
    } else {
        max1 = c1;
    } 
    
 // поиск максимальной стороны 2ой коробки
    if ((a2>b2)&&(a2>c2)) {
        max2 = a2;    
    } else if ((b2>a2)&&(b2>c2)) {
        max2 = b2;
    } else {
        max2 = c2;
    } 
    
  // поиск средней стороны 1ой коробки
    if ( ((a1>b1)&&(a1<c1)) || ((a1<b1)&&(a1>c1)) ) {
        mid1 = a1;    
    } else if ( ((b1>a1)&&(b1<c1)) || ((b1<a1)&&(b1>c1)) ) {
        mid1 = b1;
    } else {
        mid1 = c1;
    } 
    
 // поиск средней стороны 2ой коробки
    if ( ((a2>b2)&&(a2<c2)) || ((a2<b2)&&(a2>c2)) ) {
        mid2 = a2;    
    } else if ( ((b2>a2)&&(b2<c2)) || ((b2<a2)&&(b2>c2)) ) {
        mid2 = b2;
    } else {
        mid2 = c2;
    }  
    
	
    if ((min1==min2)&&(mid1==mid2)&&(max1==max2)) {
        cout << "Boxes are equal";
    } else if ((min1<=min2)&&(mid1<=mid2)&&(max1<=max2)) { 
        cout << "The first box is smaller than the second one";
    } else if ((min1>=min2)&&(mid1>=mid2)&&(max1>=max2)) { 
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
      
  return 0;
}


int main() {
  int value, i = 1;
  cin >> value;
  while (i*i < value) {
      cout << i*i << " ";
      i = i + 1;
  }       
  return 0;
} //По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания. При вводе 50 - вывод 1 4 9 16 25 36 49











