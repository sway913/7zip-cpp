#pragma once


#include "SevenZipLibrary.h"
#include "CompressionFormat.h"


namespace SevenZip
{
	class ListCallback
	{
	public:
		/*
		Called for each file found in the archive. Size in bytes.
		*/
		virtual void OnFileFound(WCHAR* path, ULONGLONG size) {}

		/*
		Called when all the files have been listed
		*/
		virtual void OnListingDone(WCHAR* path) {}
	};
}
