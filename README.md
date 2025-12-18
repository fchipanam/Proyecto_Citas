# Proyecto_Citas
Este proyecto desarrolla un sistema de gestión de citas médicas en C++ aplicando Programación Orientada a Objetos. El sistema permite registrar, buscar, listar, ordenar, guardar y cargar citas médicas mediante un menú principal implementado en el archivo main.cpp, el cual se encarga únicamente de la interacción con el usuario.

El sistema está compuesto por las siguientes clases:

Cita: clase abstracta que representa una cita médica general. Contiene la información básica del paciente (identificador, DNI, nombre y prioridad) y define métodos virtuales para mostrar los detalles de la cita y generar el formato de almacenamiento en archivo.

CitaPresencial: clase derivada de Cita que representa una cita médica presencial. Agrega información específica como la especialidad médica y el número de consultorio, e implementa los métodos virtuales definidos en la clase base.

GestorCitas: clase encargada de administrar las citas del sistema. Almacena las citas en un vector de punteros a Cita y proporciona funciones para registrar citas, listar todas las citas, buscar por DNI, ordenar por prioridad, guardar y cargar datos desde archivos de texto y generar reportes.

En cuanto a las relaciones entre clases, el sistema utiliza herencia entre Cita y CitaPresencial, agregación entre GestorCitas y Cita, polimorfismo al manejar las citas mediante punteros a la clase base Cita, y dependencia al crear objetos concretos de CitaPresencial durante la carga de datos desde archivos.

El sistema emplea archivos de texto para el almacenamiento de información, donde el archivo citas_data.txt conserva las citas registradas y el archivo reporte_citas.txt genera un reporte detallado del estado del sistema.

En conclusión, el proyecto presenta un diseño simple y modular que aplica correctamente los principios de la Programación Orientada a Objetos, facilitando la gestión eficiente de citas médicas.