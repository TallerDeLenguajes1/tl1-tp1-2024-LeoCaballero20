# tl1-tp1-2024-LeoCaballero20

### Ignorar archivos

El propósito del archivo .gitignore es ignorar archivos en los commits, impide que estos archivos se suban al repositorio git, evitando que se sobrescriban archivos de configuración o que se suban los contenidos de directorios que no deberían estar versionados como por ejemplo: cache, tmp o log.
Puede crear un archivo .gitignore en el directorio raíz del repositorio para indicarle a Git qué archivos y directorios ignorar cuando se realiza una confirmación. Para compartir las reglas de ignore con otros usuarios que clonan el repositorio, confirme el archivo .gitignore en el repositorio.
GitHub mantiene una lista oficial de archivos .gitignore recomendados para muchos sistemas operativos, entornos y lenguajes de programación populares en el repositorio público "github/gitignore". También puede usar gitignore.io a fin de crear un archivo .gitignore para el sistema operativo, lenguaje de programación o IDE.

#### Cómo configurar .gitignore

Puede indicar a Git que siempre omita determinados archivos o directorios al realizar una confirmación en cualquier repositorio de Git del equipo. Por ejemplo, puede usar esta característica para omitir los archivos de copia de seguridad temporales que cree el editor de texto.

Para omitir siempre un determinado archivo o directorio, agréguelo a un archivo denominado ignore que se encuentra dentro del directorio ~/.config/git. De forma predeterminada, Git omitirá los archivos y directorios que aparecen en el archivo de configuración global ~/.config/git/ignore. Si el directorio git y el archivo ignore aún no existen, es posible que tenga que crearlos.

### Desarrollo punto 3 inciso g

El resultado de los apartados 2 y 3 es el mismo. Esto se debe a que a la variable puntero se le asigna la dirección de memoria de la otra variable mediante el operador "&". En el punto 4 se obtiene la dirección de memoria de la variable puntero, que es diferente a la anterior ya que ésta es una variable aparte, que se crea en una dirección de memoria diferente.