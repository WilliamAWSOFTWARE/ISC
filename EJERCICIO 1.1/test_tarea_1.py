from c_testing_from_exe.abstract_test_case import PruebaAbstracta

# Recuerda Compilar con las opciones -static-libgcc y -static-libstdc++
# En CodeBlocks, click en Project -> Build options
# Si compilas sin las opciones en CodeBlocks, tendrás que modificar el código fuente para que coja las opciones

class PlantillaPrueba(PruebaAbstracta):

    def configVar(self):
        # CodeBlocks crea el ejecutable en {RutaFolderProjecto}\bin\Debug\{NombreProyecto}.exe
        self.ejecutable = r"..\Tareas\Ejercicio 1.1\Tarea#1 1.1.exe"

    # En yo.veo, solo pon lo que el programa escribe en stdout; NO incluir lo digitado por el usuario en stdin
    # todas las pruebas tienen que comenzar con test
    def test_suma_positiva(yo):
        yo.entro(
            b""
        )
        yo.veo(
            b"Nombre: WIlliam Hernandez Matricula: 20181181"
        )

