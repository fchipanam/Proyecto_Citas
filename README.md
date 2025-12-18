# Proyecto\_Citas

Este proyecto desarrolla un sistema de gestión de citas médicas en C++ aplicando Programación Orientada a Objetos. El sistema permite registrar, buscar, listar, ordenar, guardar y cargar citas médicas mediante un menú principal implementado en el archivo main.cpp, el cual se encarga únicamente de la interacción con el usuario.

El sistema está compuesto por las siguientes clases:

Cita: clase abstracta que representa una cita médica general. Contiene la información básica del paciente (identificador, DNI, nombre y prioridad) y define métodos virtuales para mostrar los detalles de la cita y generar el formato de almacenamiento en archivo.

CitaPresencial: clase derivada de Cita que representa una cita médica presencial. Agrega información específica como la especialidad médica y el número de consultorio, e implementa los métodos virtuales definidos en la clase base.

GestorCitas: clase encargada de administrar las citas del sistema. Almacena las citas en un vector de punteros a Cita y proporciona funciones para registrar citas, listar todas las citas, buscar por DNI, ordenar por prioridad, guardar y cargar datos desde archivos de texto y generar reportes.

En cuanto a las relaciones entre clases, el sistema utiliza herencia entre Cita y CitaPresencial, agregación entre GestorCitas y Cita, polimorfismo al manejar las citas mediante punteros a la clase base Cita, y dependencia al crear objetos concretos de CitaPresencial durante la carga de datos desde archivos.

El sistema emplea archivos de texto para el almacenamiento de información, donde el archivo citas\_data.txt conserva las citas registradas y el archivo reporte\_citas.txt genera un reporte detallado del estado del sistema.

Pasos para ejecutar el programa

    1. Verificar la estructura de carpetas
        Asegúrese de que existan las carpetas:

        -data/ para almacenar el archivo citas_data.txt

        -reportes/ para generar el archivo reporte_citas.txt
    2. Compilar el Programa
        Desde la terminal, ubiquese en la carpeta del proyecto y ejecute:

    3. Ejecutar el Programa
        Una vez compilado ejecutar.
            ./
    4. Uso del menú principal. 

        Al iniciar el programa se mostrará un menú que permite:

        Registrar nuevas citas médicas

        Listar todas las citas registradas

        Buscar citas por DNI del paciente

        Ordenar las citas según su prioridad

        Guardar las citas en archivos de texto

        Cargar citas previamente guardadas

        Generar un reporte de citas  
    5. Cierre del programa.

    Al finalizar la ejecución, la memoria utilizada por las citas es liberada automáticamente mediante el destructor del gestor.  

En conclusión, el proyecto presenta un diseño simple y modular que aplica correctamente los principios de la Programación Orientada a Objetos, facilitando la gestión eficiente de citas médicas.

