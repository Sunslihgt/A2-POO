#pragma once

namespace NS_Services {
	public ref class BaseObject abstract {
	protected:
		int id;
		bool isCreated;

	public:
		//BaseObject(int id, bool isCreated);
		virtual bool create() = 0;
		virtual bool update() = 0;
		virtual bool deleteObject() = 0;
	};
}