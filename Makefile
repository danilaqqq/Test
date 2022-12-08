GCC 		= "C:\Program Files (x86)\Embarcadero\Dev-Cpp\TDM-GCC-64\bin\g++"
EXECUTABLE 	= "PR 3.exe"
SOURCES 	= main.cpp array.cpp matrix.cpp load.cpp
OBJECTS		= $(SOURCES:.cpp=.o)
OBJFLAGS	= -c -o
LIBFLAGS	= -shared -o

all: $(OBJECTS) arrlib.dll matlib.dll load.dll $(EXECUTABLE) clean

$(OBJECTS): $(SOURCES)
	$(GCC) $(OBJFLAGS) $@ $*.cpp

arrlib.dll: array.o
	$(GCC) $(LIBFLAGS) arrlib.dll array.o

matlib.dll: matrix.o
	$(GCC) $(LIBFLAGS) matlib.dll matrix.o

load.dll: load.o
	$(GCC) $(LIBFLAGS) "C:\Danila\Studies\KompPR\PR 3\load.dll" "C:\Danila\Studies\KompPR\PR 3\load.o"

$(EXECUTABLE): main.o
	$(GCC) -o $(EXECUTABLE) main.o -L./ -l load

clean:
	del $(OBJECTS)