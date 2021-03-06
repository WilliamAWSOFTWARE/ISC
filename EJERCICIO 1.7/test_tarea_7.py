from c_testing_from_exe.abstract_test_case import PruebaAbstracta

# Recuerda Compilar con las opciones -static-libgcc y -static-libstdc++
# En CodeBlocks, click en Project -> Build options
# Si compilas sin las opciones en CodeBlocks, tendrás que modificar el código fuente para que coja las opciones

class PlantillaPrueba(PruebaAbstracta):

    def configVar(self):
        # CodeBlocks crea el ejecutable en {RutaFolderProjecto}\bin\Debug\{NombreProyecto}.exe
        self.ejecutable = r"..\Tareas\Ejercicio 1.7\Tarea#1 1.7.exe"

    # En yo.veo, solo pon lo que el programa escribe en stdout; NO incluir lo digitado por el usuario en stdin
    # todas las pruebas tienen que comenzar con test
    def test_suma_positiva(yo):
        yo.entro(
            b"Digite el dia:"
            b"Digite el mes:"
        )
        yo.veo(
        b"ESTAMOS EN PRIMAVERA\n"
        b"ESTAMOS EN VERANO\n"
        b"ESTAMOS EN OTOÑO\n"
        b"ESTAMOS EN INVIERNO\n"
        b"Fecha ingresada no valida favor digitar fecha valida\n"
        )


