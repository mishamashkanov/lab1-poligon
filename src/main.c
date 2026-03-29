#include <stdio.h>
#include <math.h>

int main() {
	    int n;
	        double r;

		    printf("Введите количество сторон n: ");
		        scanf("%d", &n);

			    printf("Введите радиус окружности r: ");
			        scanf("%lf", &r);

				    if (n < 3 || r <= 0) {
					            printf("Ошибка: n >= 3, r > 0\n");
						            return 1;
							        }

				        double P = 2 * n * r * tan(M_PI / n);

					    printf("Периметр правильного %d-угольника: %.4lf\n", n, P);

					        return 0;
}









