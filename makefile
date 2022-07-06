# https://hiltmon.com/blog/2013/07/03/a-simple-c-plus-plus-project-structure/
#
# we use automatic dependency generation, a modern make feature
#
# personally you alias g++ to g++-8, so check what's happening on other systems
#
# also check that LD_LIBRARY_PATH on debian contains path to mpfr and gmp libs

STD := -std=c++17
CXX := g++ $(STD)
SRCDIR := src
BUILDDIR := build
TARGET := pilot

SRCEXT := cc
SRCTREE := $(shell find $(SRCDIR) \! -path '*/\.*' -type d)
BUILDTREE := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCTREE)/%)
SOURCES := $(shell find $(SRCDIR) \! -path '*/\.*' -type f -name "*.$(SRCEXT)")
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CXXFLAGS = -Wall -g -O3 -ferror-limit=1 -Wno-unused-function -Wno-unused-variable
LIB := -L${HOME}/.mpfr/lib -lmpfr -L${HOME}/.gmp/lib -lgmp
INC := -I include

TARCMD := tar --exclude='*.swp' -cf
TARNAME := pl_$(shell date "+%Y-%m-%d-%H%M").tar
TARFILES := src include makefile

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@echo " $(CXX) $^ -o $(TARGET) $(LIB)"; $(CXX) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@echo $(BUILDTREE) | xargs mkdir -p
	@echo " $(CXX) $(CXXFLAGS) $(INC) -c -o $@ $<"; $(CXX) $(CXXFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning..."; 
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

tar:
	@echo " Tarring..."; 
	@echo " $(TARCMD) $(TARNAME) $(TARFILES)"; $(TARCMD) $(TARNAME) $(TARFILES)

.SILENT:

.PHONY: clean
