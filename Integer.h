class Integer {
    private:
    int value;
    public:
    Integer();
    Integer(int values);
    ~Integer (){}
    int getValue();
    void setValue(int values);
    Integer add (const Integer& other) const;
    Integer subtract ( const Integer& other) const;
    Integer multiply (const Integer& other) const;
    Integer divide (const Integer& other) const;
};
Integer::Integer ()
{
   value = 1;
}

Integer::Integer (int values)
{
    value = values;
}
int Integer::getValue()
{
    return value;
}
void Integer::setValue(int values)
{
    value=values;
}
Integer Integer::add(const Integer& other) const
{
    int val1=(value) + (other.value);
    return Integer(val1);
}
Integer Integer::subtract(const  Integer& other) const
{
    int val1=(value)-(other.value);
    return Integer(val1);
}
Integer Integer::multiply(const Integer& other) const
{
    int val1=(value) * (other.value);
    return Integer (val1);
}
Integer Integer::divide(const Integer& other) const
{
    int val1=(value) / (other.value);
    return Integer(val1);
}

