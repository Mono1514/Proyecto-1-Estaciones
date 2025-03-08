class Triangulo:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def clasificar(self):
        triangulo = lambda x, y, z: x + y > z and x + z > y and y + z > x
        
        if not triangulo(self.a, self.b, self.c):
            return "No es un triángulo"
        if self.a == self.b == self.c:
            return "Equilátero"
        if self.a == self.b or self.a == self.c or self.b == self.c:
            return "Isósceles"
        return "Escaleno"

if __name__ == "__main__":
    a, b, c = map(int, input("Ingrese las longitudes de los lados (a, b, c): ").split())
    triangulo = Triangulo(a, b, c)
    print(triangulo.clasificar())



