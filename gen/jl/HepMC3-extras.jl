# Extra methods for HepMC3 that provide a better user interface than
# the wrapped C++ calls

# When printing an attribute, convert the datatype to a string
Base.show(io::IO, a::Main.HepMC3.HepMC3!Attribute) = Base.show(io, value(a))

# Define a more Julian way to update the value of the attribute
value!(a::Main.HepMC3.HepMC3!Attribute, v) = set_value(a, v)
export value!
