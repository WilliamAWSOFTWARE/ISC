from c_testing_from_exe.abstract_test_case import PruebaAbstracta

# Recuerda Compilar con las opciones -static-libgcc y -static-libstdc++
# En CodeBlocks, click en Project -> Build options
# Si compilas sin las opciones en CodeBlocks, tendrás que modificar el código fuente para que coja las opciones

class PlantillaPrueba(PruebaAbstracta):

    def configVar(self):
        # CodeBlocks crea el ejecutable en {RutaFolderProjecto}\bin\Debug\{NombreProyecto}.exe
        self.ejecutable = r"..\Tareas\Ejercicio 1.2\Tarea#1 1.2.exe"

    # En yo.veo, solo pon lo que el programa escribe en stdout; NO incluir lo digitado por el usuario en stdin
    # todas las pruebas tienen que comenzar con test
    def test_suma_positiva(yo):
        yo.entro(
            b""
            b""
        )
        yo.veo(
            b"Los tipo Int son: 12 y 12345\r\n"
            b"El tipo long es: 1234567890\r\n"
            b"El tipo short es: 4043\r\n"
            b"El tipo float es: 2.13459\r\n"
            b"El tipo double es: 1.1315927\r\n"
            b"El tipo char es: W\r\n"
            b"El tipo long sin signo es: 2541567890\r\n"
        )
