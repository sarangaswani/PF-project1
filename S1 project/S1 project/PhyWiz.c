float dist(float d1, int aa);
float velocity(float v, int aa);
float mass(float mm, int aa);
float root(float val);
float time(float time, int aa);
float sine(int deg);
float cosine(int deg);
int fact(int n);
float power1(float base, int exp);
int g = 10;
float pi = 3.14159;
float sqt(int main);
int his(float j);
int his(float j) {
  int a = 1;
  FILE * ptr;
  ptr = fopen("MPP.txt", "w+");
  fprintf(ptr, "%f", "j");
  fclose(ptr);
}

float velocity(float v, int aa) {
  if (aa == 2) {
    v = v * 0.278;
  }
  if (aa == 1) {
    v;
  }
  return v;
}
float dist(float d1, int aa) {
  if (aa == 1) {
    d1;
  }
  if (aa == 2) {
    d1 = d1 / 1000;
  }
  if (aa == 3) {
    d1 = d1 * 100;
  }

  return d1;
}
float mass(float mm, int aa) {
  if (aa == 1) {
    mm = mm * 0.001;
  }
  if (aa == 2) {
    mm;
  }
  return mm;
}
float energy(float jj, int aa) {
  jj = jj / 1000;
  return jj;
}
float root(float val) {
  float temp, sqrt;
  sqrt = val / 2;
  temp = 0;
  while (sqrt != temp) {
    temp = sqrt;
    sqrt = (val / temp + temp) / 2;
  }
  return sqrt;
}
float time(float time, int aa) {
  if (aa == 1) {
    time;
  }
  if (aa == 2) {
    time = time * 3600;
  }
  return time;
}
float sine(int deg) {
  float PI = 3.14159;
  deg %= 360; // make it less than 360
  float rad = deg * PI / 180;
  float sin = 0;

  int i;
  for (i = 0; i < 7; i++) { // That's Taylor series!!
    sin += power1(-1, i) * power1(rad, 2 * i + 1) / fact(2 * i + 1);
  }
  return sin;
}

float cosine(int deg) {
  float PI = 3.14159;
  deg %= 360; // make it less than 360
  float rad = deg * PI / 180;
  float cos = 0;

  int i;
  for (i = 0; i < 7; i++) { // That's also Taylor series!!
    cos += power1(-1, i) * power1(rad, 2 * i) / fact(2 * i);
  }
  return cos;
}
float power1(float base, int exp) {
  if (exp < 0) {
    if (base == 0)
      return -0; // Error!!
    return 1 / (base * power1(base, (-exp) - 1));
  }
  if (exp == 0)
    return 1;
  if (exp == 1)
    return base;
  return base * power1(base, exp - 1);
}

int fact(int n) {
  return n <= 0 ? 1 : n * fact(n - 1);
}
float sqt(int main) {
  return main * main;
}
