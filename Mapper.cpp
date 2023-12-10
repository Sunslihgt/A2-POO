#include "Mapper.h"

namespace NS_DB {
	System::String^ Mapper::selectEmployeeById(int id) {
		System::String^ query = gcnew System::String(" SELECT e.idEmployee, e.name, e.firstName, e.startDate, e.idAddress, a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Employee] e INNER JOIN [A2POO-AzureDB].[dbo].[Address] a ON e.idAddress = a.idAddress INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity WHERE e.idEmployee = " + id);
		return query;
	}

	System::String^ Mapper::selectClientById(int id) {
		System::String^ query = gcnew System::String(" SELECT cl.idClient, cl.name , cl.firstName, cl.birthDate, cl.firstOrderDate FROM [A2POO-AzureDB].[dbo].[Client] cl WHERE cl.idClient = " + id);
		return query;
	}

	System::String^ Mapper::selectItemById(int id) {
		System::String^ query = gcnew System::String(" SELECT i.idItem, i.name, i.reference, i.quantity, i.availableQuantity, i.quantityThreshold, i.supplierPrice, i.unitPrice, i.vatRate FROM [A2POO-AzureDB].[dbo].[Item] i WHERE i.idItem = " + id);
		return query;
	}

	System::String^ Mapper::selectPurchasedItemById(int id) {
		System::String^ query = gcnew System::String(" SELECT pi.idPurchasedItem, pi.itemAmount, pi.totalPrice, pi.vatAmount, pi.idPurchase, pi.idItem FROM [A2POO-AzureDB].[dbo].[PurchasedItem] pi WHERE pi.idPurchasedItem = " + id);
		return query;
	}

	System::String^ Mapper::selectPurchaseById(int id) {
		System::String^ query = gcnew System::String(" SELECT p.idPurchase, p.idClient, cl.name, cl.firstName, p.purchaseDate, p.deliveryDate, p.discountAmount, p.dutyFreePrice, p.vatAmount, p.ttcPrice, p.idDeliveryAddress, a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Purchase] p INNER JOIN[A2POO-AzureDB].[dbo].[Client] cl ON p.idClient = cl.idClient INNER JOIN [A2POO-AzureDB].[dbo].[Address] a ON p.idDeliveryAddress = a.idAddress INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity WHERE p.idPurchase = " + id);
		return query;
	}

	System::String^ Mapper::selectAddressById(int id) {
		System::String^ query = gcnew System::String(" SELECT a.idAddress, a.streetName, a.streetNumber, a.idCity, ci.cityName FROM [A2POO-AzureDB].[dbo].[Address] a INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity WHERE a.idAddress = " + id);
		return query;
	}

	System::String^ Mapper::selectCityById(int id) {
		System::String^ query = gcnew System::String(" SELECT ci.idCity, ci.cityName FROM [A2POO-AzureDB].[dbo].[City] ci WHERE ci.idCity = " + id);
		return query;
	}

	System::String^ Mapper::selectPaymentMethodById(int id) {
		System::String^ query = gcnew System::String(" SELECT pm.idPaymentMethod, pm.name, pm.firstName, pm.amount, pm.payDate, pm.idPaymentAddress, pm.idPaymentType FROM [A2POO-AzureDB].[dbo].[PaymentMethod] pm WHERE pm.idPaymentMethod = " + id);
		return query;
	}

	System::String^ Mapper::selectPaymentTypeById(int id) {
		System::String^ query = gcnew System::String(" SELECT pt.idPaymentType, pt.typeName FROM [A2POO-AzureDB].[dbo].[PaymentType] pt WHERE pt.idPaymentType = " + id);
		return query;
	}

	System::String^ Mapper::searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName) {
		System::String^ query = gcnew System::String(" SELECT e.idEmployee, e.name, e.firstName, e.startDate, a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Employee] e INNER JOIN [A2POO-AzureDB].[dbo].[Address] a ON e.idAddress = a.idAddress INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (name != nullptr && name != "") {
			filters += "e.name LIKE '%" + name + "%'";
			conditions = true;
		}
		if (firstName != nullptr && firstName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "e.firstName LIKE '%" + firstName + "%'";
			conditions = true;
		}
		if (streetName != nullptr && streetName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "a.streetName LIKE '%" + streetName + "%'";
			conditions = true;
		}
		if (streetNumber > 0) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "a.streetNumber = " + streetNumber;
			conditions = true;
		}

		if (cityName != nullptr && cityName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "ci.cityName LIKE '%" + cityName + "%'";
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
		System::String^ query = gcnew System::String(" SELECT cl.idClient, cl.name , cl.firstName, cl.birthDate, cl.firstOrderDate FROM [A2POO-AzureDB].[dbo].[Client] cl ");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (name != nullptr && name != "") {
			filters += "cl.name LIKE '%" + name + "%'";
			conditions = true;
		}
		if (firstName != nullptr && firstName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "cl.firstName LIKE '%" + firstName + "%'";
			conditions = true;
		}
		if (birthDate != nullptr && birthDate->Year >= MIN_BIRTHYEAR) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "cl.birthDate = '" + birthDate + "'";
			conditions = true;
		}
		if (firstPurchaseDate != nullptr && firstPurchaseDate->Year > MIN_BIRTHYEAR) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "cl.firstOrderDate = '" + firstPurchaseDate + "'";
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchItems(System::String^ name, System::String^ reference) {
		System::String^ query = gcnew System::String(" SELECT i.idItem, i.name, i.reference, i.quantity, i.availableQuantity, i.quantityThreshold, i.supplierPrice, i.unitPrice, i.vatRate FROM [A2POO-AzureDB].[dbo].[Item] i");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (name != nullptr && name != "") {
			filters += "i.name LIKE '%" + name + "%'";
			conditions = true;
		}
		if (reference != nullptr && reference != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "i.reference LIKE '%" + reference + "%'";
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchPurchasedItems(int idPurchase, int idItem) {
		System::String^ query = gcnew System::String(" SELECT pi.idPurchasedItem, pi.itemAmount, pi.totalPrice, pi.vatAmount, pi.idPurchase, pi.idItem, i.name, i.reference FROM [A2POO-AzureDB].[dbo].[PurchasedItem] pi INNER JOIN [A2POO-AzureDB].[dbo].[Item] i ON pi.idItem = i.idItem");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (idPurchase >= 1) {
			filters += "pi.idPurchase = " + idPurchase;
			conditions = true;
		}
		if (idItem >= 1) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "pi.idItem = " + idItem;
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchPurchases(int idClient, System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate) {
		System::String^ query = gcnew System::String(" SELECT p.idPurchase, p.idClient, cl.name, cl.firstName, p.purchaseDate, p.deliveryDate, p.discountAmount, p.dutyFreePrice, p.vatAmount, p.ttcPrice, p.idDeliveryAddress FROM [A2POO-AzureDB].[dbo].[Purchase] p INNER JOIN [A2POO-AzureDB].[dbo].[Client] cl ON p.idClient = cl.idClient");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (clientName != nullptr && clientName != "") {
			filters += "cl.name LIKE '%" + clientName + "%'";
			conditions = true;
		}
		if (clientFirstName != nullptr && clientFirstName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "cl.firstName LIKE '%" + clientFirstName + "%'";
			conditions = true;
		}
		if (purchaseDate != nullptr && purchaseDate->Year >= MIN_PURCHASEYEAR) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "p.purchaseDate = '" + purchaseDate + "'";
			conditions = true;
		}
		if (deliveryDate != nullptr && deliveryDate->Year > MIN_PURCHASEYEAR) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "p.deliveryDate = '" + deliveryDate + "'";
			conditions = true;
		}
		if (idClient > 0) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "p.idClient = " + idClient;
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchAddresses(System::String^ streetName, int streetNumber, int idCity) {
		System::String^ query = gcnew System::String(" SELECT a.idAddress, a.streetName, a.streetNumber, a.idCity, ci.cityName FROM [A2POO-AzureDB].[dbo].[Address] a INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (streetName != nullptr && streetName != "") {
			filters += "a.streetName LIKE '%" + streetName + "%'";
			conditions = true;
		}
		if (streetNumber >= 1) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "a.streetNumber = '" + streetNumber + "'";
			conditions = true;
		}
		if (idCity >= 0) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "a.idCity = " + idCity;
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchAddresses(System::String^ streetName, int streetNumber, System::String^ cityName) {
		System::String^ query = gcnew System::String(" SELECT a.idAddress, a.streetName, a.streetNumber, a.idCity, ci.cityName FROM [A2POO-AzureDB].[dbo].[Address] a INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (streetName != nullptr && streetName != "") {
			filters += "a.streetName LIKE '%" + streetName + "%'";
			conditions = true;
		}
		if (streetNumber >= 1) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "a.streetNumber = '" + streetNumber + "'";
			conditions = true;
		}
		if (cityName != nullptr && cityName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "ci.cityName LIKE '%" + cityName + "%'";
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchCities(System::String^ cityName) {
		System::String^ query = gcnew System::String(" SELECT ci.idCity, ci.cityName FROM [A2POO-AzureDB].[dbo].[City] ci");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (cityName != nullptr && cityName != "") {
			if (conditions) {
				filters += " AND ";
			}
			filters += "ci.cityName LIKE '%" + cityName + "%'";
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchPaymentMethods(int idPaymentAddress, int idPurchase, int idPaymentType) {
		System::String^ query = gcnew System::String(" SELECT pm.idPaymentMethod, pm.name, pm.firstName, pm.amount, pm.payDate, pm.idPaymentAddress, pm.idPaymentType, pm.idPurchase FROM [A2POO-AzureDB].[dbo].[PaymentMethod] pm");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (idPaymentAddress >= 1) {
			filters += "pm.idPaymentAddress = " + idPaymentAddress;
			conditions = true;
		}
		if (idPurchase >= 1) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "pm.idPurchase = " + idPurchase;
			conditions = true;
		}
		if (idPaymentType >= 1) {
			if (conditions) {
				filters += " AND ";
			}
			filters += "pm.idPaymentType = " + idPaymentType;
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::searchPaymentTypes(System::String^ typeName) {
		System::String^ query = gcnew System::String(" SELECT pt.idPaymentType, pt.typeName FROM [A2POO-AzureDB].[dbo].[PaymentType] pt");

		bool conditions = false;
		System::String^ filters = gcnew System::String(" WHERE ");
		if (typeName != nullptr && typeName != "") {
			filters += "pt.typeName LIKE '%" + typeName + "%'";
			conditions = true;
		}

		if (conditions) {
			query += filters;
		}

		return query;
	}

	System::String^ Mapper::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress) {
		System::String^ query = gcnew System::String(" INSERT INTO Employee (name, firstName, startDate, idAddress) OUTPUT Inserted.idEmployee VALUES('" + name + "', '" + firstName + "', '" + startDate + "', " + idAddress + ")");
		return query;
	}

	System::String^ Mapper::createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate) {
		System::String^ query = gcnew System::String(" INSERT INTO Client (name, firstName, birthDate, firstOrderDate) OUTPUT Inserted.idClient VALUES('" + name + "', '" + firstName + "', '" + birthDate->ToString("yyyy-MM-dd") + "', '" + firstOrderDate->ToString("yyyy-MM-dd") + "')");
		return query;
	}

	System::String^ Mapper::createItem(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
		System::String^ query = gcnew System::String(" INSERT INTO Item (name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) OUTPUT Inserted.idItem VALUES('" + name + "', '" + reference + "', " + quantity + ", " + availableQuantity + ", " + quantityThreshold + ", " + supplierPrice.ToString()->Replace(",", ".") + ", " + unitPrice.ToString()->Replace(",", ".") + ", " + vatRate.ToString()->Replace(",", ".") + ")");
		return query;
	}

	System::String^ Mapper::createPurchasedItem(int itemAmount, float totalPrice, float vatAmount, int idPurchase, int idItem) {
		System::String^ query = gcnew System::String(" INSERT INTO PurchasedItem (itemAmount, totalPrice, vatAmount, idPurchase, idItem) OUTPUT Inserted.idPurchasedItem VALUES(" + itemAmount + ", " + totalPrice.ToString()->Replace(",", ".") + ", " + vatAmount.ToString()->Replace(",", ".") + ", " + idPurchase + ", " + idItem + ")");
		return query;
	}

	System::String^ Mapper::createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, int idDeliveryAddress) {
		System::String^ query = gcnew System::String(" INSERT INTO Purchase (purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idDeliveryAddress, idClient) OUTPUT Inserted.idPurchase VALUES('" + purchaseDate->ToString("yyyy-MM-dd") + "', '" + deliveryDate->ToString("yyyy-MM-dd") + "', " + discountAmount.ToString()->Replace(",", ".") + ", " + dutyFreePrice.ToString()->Replace(",", ".") + ", " + vatAmount.ToString()->Replace(",", ".") + ", " + ttcPrice.ToString()->Replace(",", ".") + ", " + idDeliveryAddress + ", " + idClient + ")");
		return query;
	}

	System::String^ Mapper::createAddress(System::String^ streetName, int streetNumber, int idCity) {
		System::String^ query = gcnew System::String(" INSERT INTO Address (streetName, streetNumber, idCity) OUTPUT Inserted.idAddress VALUES('" + streetName + "', " + streetNumber + ", " + idCity + ")");
		return query;
	}

	System::String^ Mapper::createCity(System::String^ cityName) {
		System::String^ query = gcnew System::String(" INSERT INTO City (cityName) OUTPUT Inserted.idCity VALUES('" + cityName + "')");
		return query;
	}

	System::String^ Mapper::createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, int idPaymentAddress) {
		System::String^ query = gcnew System::String(" INSERT INTO PaymentMethod (name, firstName, amount, payDate, idPaymentAddress, idPaymentType, idPurchase) OUTPUT Inserted.idPaymentMethod VALUES('" + name + "', '" + firstName + "', " + amount.ToString()->Replace(",", ".") + ", '" + payDate->ToString("yyyy-MM-dd") + "', " + idPaymentAddress + ", " + idPaymentType + ", " + idPurchase + ")");
		return query;
	}

	System::String^ Mapper::createPaymentType(System::String^ typeName) {
		System::String^ query = gcnew System::String(" INSERT INTO PaymentType (typeName) OUTPUT Inserted.idPaymentType VALUES('" + typeName + "')");
		return query;
	}

	System::String^ Mapper::updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE Employee SET ");

		if (name != nullptr && name != "") {
			query += "name = '" + name + "'";
			modification = true;
		}
		if (firstName != nullptr && firstName != "") {
			if (modification) {
				query += ", ";
			}
			query += "firstName = '" + firstName + "'";
			modification = true;
		}
		if (startDate != nullptr && (startDate->System::DateTime::Compare(*startDate, *MIN_DATETIME) > 0)) {
			if (modification) {
				query += ", ";
			}
			query += "startDate = '" + startDate->ToString("yyyy-MM-dd") + "'";
			modification = true;
		}
		if (idAddress > 0) {
			if (modification) {
				query += ", ";
			}
			query += "idAddress = " + idAddress;
			modification = true;
		}

		query += " WHERE idEmployee = " + idEmployee + " ;";

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE Client SET ");

		if (name != nullptr && name != "") {
			query += "name = '" + name + "'";
			modification = true;
		}

		if (firstName != nullptr && firstName != "") {
			if (modification) {
				query += ", ";
			}
			query += "firstName = '" + firstName + "'";
			modification = true;
		}

		if (birthDate != nullptr && (birthDate->System::DateTime::Compare(*birthDate, *MIN_DATETIME) > 0)) {
			if (modification) {
				query += ", ";
			}
			query += "birthDate = '" + birthDate->ToString("yyyy-MM-dd") + "'";
			modification = true;
		}

		if (firstPurchaseDate != nullptr && (firstPurchaseDate->System::DateTime::Compare(*firstPurchaseDate, *MIN_DATETIME) > 0)) {
			if (modification) {
				query += ", ";
			}
			query += "firstOrderDate = '" + firstPurchaseDate->ToString("yyyy-MM-dd") + "'";
			modification = true;
		}

		query += " WHERE idClient = " + idClient;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updateItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE Item SET ");

		if (name != nullptr && name != "") {
			query += "name = '" + name + "'";
			modification = true;
		}
		if (reference != nullptr && reference != "") {
			if (modification) {
				query += ", ";
			}
			query += "reference = '" + reference + "'";
			modification = true;
		}
		if (quantity >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "quantity = " + quantity;
			modification = true;
		}
		if (availableQuantity >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "availableQuantity = " + availableQuantity;
			modification = true;
		}
		if (quantityThreshold >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "quantityThreshold = " + quantityThreshold;
			modification = true;
		}
		if (supplierPrice > 0) {
		if (modification) {
			query += ", ";
		}
		query += "supplierPrice = " + supplierPrice.ToString()->Replace(",", ".");
		modification = true;
		}
		if (unitPrice > 0) {
			if (modification) {
				query += ", ";
			}
			query += "unitPrice = " + unitPrice.ToString()->Replace(",", ".");
			modification = true;
		}
		if (vatRate > 0) {
			if (modification) {
				query += ", ";
			}
			query += "vatRate = " + vatRate.ToString()->Replace(",", ".");
			modification = true;
		}

		query += " WHERE idItem = " + idItem;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updatePurchasedItem(int idPurchasedItem, int idItem, int idPurchase, int itemAmount, float totalPrice, float vatAmount) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE PurchasedItem SET ");

		if (idItem > 0) {
			if (modification) {
				query += ", ";
			}
			query += "idItem = " + idItem;
			modification = true;
		}

		if (idPurchase > 0) {
			if (modification) {
				query += ", ";
			}
			query += "idPurchase = " + idPurchase;
			modification = true;
		}
		if (itemAmount >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "itemAmount = " + itemAmount;
			modification = true;
		}

		if (totalPrice > 0) {
			if (modification) {
				query += ", ";
			}
			query += "totalPrice = " + totalPrice.ToString()->Replace(",", ".");
			modification = true;
		}

		if (vatAmount > 0) {
			if (modification) {
				query += ", ";
			}
			query += "vatAmount = " + vatAmount.ToString()->Replace(",", ".");
			modification = true;
		}

		query += " WHERE idPurchasedItem = " + idPurchasedItem;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idDeliveryAddress, int idClient) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE Purchase SET ");

		if (idClient > 0) {
			query += "idCLient = " + idClient;
			modification = true;
		}
		if (purchaseDate != nullptr && (System::DateTime::Compare(*purchaseDate, *MIN_PURCHASE_DATE) > 0)) {
			if (modification) {
				query += ", ";
			}
			query += "purchaseDate = '" + purchaseDate->ToString("yyyy-MM-dd") + "'";
			modification = true;
		}
		if (deliveryDate != nullptr && (System::DateTime::Compare(*deliveryDate, *MIN_PURCHASE_DATE) > 0)) {
			if (modification) {
				query += ", ";
			}
			query += "deliveryDate = '" + deliveryDate->ToString("yyyy-MM-dd") + "'";
			modification = true;
		}
		if (discountAmount >= 0) {
			if (modification) {
				query += ", ";
			}

			query += "discountAmount = " + discountAmount.ToString()->Replace(",", ".");
			modification = true;
		}
		if (dutyFreePrice >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "dutyFreePrice = " + dutyFreePrice.ToString()->Replace(",", ".");
			modification = true;
		}
		if (vatAmount >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "vatAmount = " + vatAmount.ToString()->Replace(",", ".");
			modification = true;
		}
		if (ttcPrice >= 0) {
			if (modification) {
				query += ", ";
			}
			query += "ttcPrice = " + ttcPrice.ToString()->Replace(",", ".");
			modification = true;
		}

		query += " WHERE idPurchase = " + idPurchase;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updateAddress(int idAddress, System::String^ streetName, int streetNumber, int idCity) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE Address SET ");

		if (streetName != nullptr && streetName != "") {
			query += "streetName = '" + streetName + "'";
			modification = true;
		}

		if (streetNumber > 0) {
			if (modification) {
				query += ", ";
			}
			query += "streetNumber = " + streetNumber;
			modification = true;
		}

		if (idCity > 0) {
			if (modification) {
				query += ", ";
			}
			query += "idCity = " + idCity;
			modification = true;
		}

		query += " WHERE idAddress = " + idAddress;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updateCity(int idCity, System::String^ cityName) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE City SET ");

		if (cityName != nullptr && cityName != "") {
			query += "cityName = '" + cityName + "'";
			modification = true;
		}

		query += " WHERE idCity = " + idCity;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updatePaymentMethod(int idPaymentMethod, int idPaymentAddress, int idPaymentType, System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate) {
		bool modification = false;
		System::String^ query = gcnew System::String(" UPDATE PaymentMethod SET ");

		if (idPaymentAddress > 0) {
			query += "idPaymentAddress = " + idPaymentAddress;
			modification = true;
		}
		if (idPaymentType > 0) {
			if (modification) {
				query += ", ";
			}
			query += "idPaymentType = " + idPaymentType;
			modification = true;
		}
		if (name != nullptr && name != "") {
			if (modification) {
				query += ", ";
			}
			query += "name = '" + name + "'";
			modification = true;
		}
		if (firstName != nullptr && firstName != "") {
			if (modification) {
				query += ", ";
			}
			query += "firstName = '" + firstName + "'";
			modification = true;
		}
		if (amount > 0) {
			if (modification) {
				query += ", ";
			}
			query += "amount = " + amount.ToString()->Replace(",", ".");
			modification = true;
		}
		if (payDate != nullptr && (System::DateTime::Compare(*payDate, *MIN_PURCHASE_DATE) > 0)) {
			if (modification) {
				query += ", ";
			}
			query += "payDate = '" + payDate->ToString("yyyy-MM-dd") + "'";
			modification = true;
		}

		query += " WHERE idPaymentMethod = " + idPaymentMethod;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::updatePaymentType(int idPaymentType, System::String^ typeName) {
		System::String^ query = gcnew System::String(" UPDATE PaymentType SET ");
		bool modification = false;

		if (typeName != nullptr && typeName != "") {
			query += "typeName = '" + typeName + "'";
			modification = true;
		}

		query += " WHERE idPaymentType = " + idPaymentType;

		if (!modification) {
			query = "";
		}

		return query;
	}

	System::String^ Mapper::deleteEmployee(int idEmployee) {
		System::String^ query = gcnew System::String("DELETE FROM Employee WHERE idEmployee = " + idEmployee);
		return query;
	}

	System::String^ Mapper::deleteClient(int idClient) {
		System::String^ query = gcnew System::String("DELETE FROM Client WHERE idClient = " + idClient);
		return query;
	}

	System::String^ Mapper::deleteItem(int idItem) {
		System::String^ query = gcnew System::String("DELETE FROM Item WHERE idItem = " + idItem);
		return query;
	}

	System::String^ Mapper::deletePurchasedItem(int idPurchasedItem) {
		System::String^ query = gcnew System::String("DELETE FROM PurchasedItem WHERE idPurchasedItem = " + idPurchasedItem);
		return query;
	}

	System::String^ Mapper::deletePurchase(int idPurchase) {
		System::String^ query = gcnew System::String("DELETE FROM Purchase WHERE idPurchase = " + idPurchase);
		return query;
	}

	System::String^ Mapper::deleteAddress(int idAddress) {
		System::String^ query = gcnew System::String("DELETE FROM Address WHERE idAddress = " + idAddress);
		return query;
	}

	System::String^ Mapper::deleteCity(int idCity) {
		System::String^ query = gcnew System::String("DELETE FROM City WHERE idCity = " + idCity);
		return query;
	}

	System::String^ Mapper::deletePaymentMethod(int idPaymentMethod) {
		System::String^ query = gcnew System::String("DELETE FROM PaymentMethod WHERE idPaymentMethod = " + idPaymentMethod);
		return query;
	}

	System::String^ Mapper::deletePaymentType(int idPaymentType) {
		System::String^ query = gcnew System::String("DELETE FROM PaymentType WHERE idPaymentType = " + idPaymentType);
		return query;
	}

	System::String^ Mapper::deleteManage(int idEmployee, bool isSuperior) {
		if (isSuperior) {
			return gcnew System::String("DELETE FROM manage WHERE superior = " + idEmployee);
		} else {
			return gcnew System::String("DELETE FROM manage WHERE subordinate = " + idEmployee);
		}
	}

	// Calcule le prix total d'un achat par aggrégation des PurchasedItem de la commande
	System::String^ Mapper::calculatePurchaseTotalPrice(int idPurchase) {
		return gcnew System::String("SELECT SUM(totalPrice), SUM(vatAmount) FROM PurchasedItem WHERE idPurchase = " + idPurchase);
	}
}