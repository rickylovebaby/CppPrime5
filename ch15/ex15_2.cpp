class Quote{
public:
    std::string isbn() const;
    virtual double net_price(std::size_t n) const;
}
