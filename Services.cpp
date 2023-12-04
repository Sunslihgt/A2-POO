#include "Services.h"

DataSet^ Services::searchEmployees(System::String name, System::String firstName, System::String streetName, int streetNumber, System::String cityName)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::getEmployeeAdress(int employeeId)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchClientDeliveryAdresses(int clientId)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchClientBillingAdresses(int clientId)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchItems()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchPurchases()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchAddresses()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchStatistics()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

float Services::getAveragePurchasePrice()
{
    return 0.0f;
}

float Services::getTurnoverMonth(int year, int month)
{
    return 0.0f;
}

float Services::getClientTotalSpending(int clientId)
{
    return 0.0f;
}

DataSet^ Services::searchThresholdItems()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchMostSoldItems()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

DataSet^ Services::searchLeastSoldItems()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

float Services::getStoredSupplierPrice()
{
    return 0.0f;
}

float Services::getStoredSellPrice()
{
    return 0.0f;
}

float Services::getStoredValue(float vatPercent, float profitPercent, float unknownShrinkagePercent)
{
    return 0.0f;
}
