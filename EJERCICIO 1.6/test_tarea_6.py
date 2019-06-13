from c_testing_from_exe.abstract_test_case import PruebaAbstracta

# Recuerda Compilar con las opciones -static-libgcc y -static-libstdc++
# En CodeBlocks, click en Project -> Build options
# Si compilas sin las opciones en CodeBlocks, tendrás que modificar el código fuente para que coja las opciones

class PlantillaPrueba(PruebaAbstracta):

    def configVar(self):
        # CodeBlocks crea el ejecutable en {RutaFolderProjecto}\bin\Debug\{NombreProyecto}.exe
        self.ejecutable = r"..\Tareas\Ejercicio 1.6\Tarea#1 1.6.exe"

    # En yo.veo, solo pon lo que el programa escribe en stdout; NO incluir lo digitado por el usuario en stdin
    # todas las pruebas tienen que comenzar con test
    def test_suma_positiva(yo):
        yo.entro(
            b"Ingrese la velocidad en m/s:"
            b"Ingrese la distancia en metros:"
        )
        yo.veo(
        b"El tiempo es de:"
        )


