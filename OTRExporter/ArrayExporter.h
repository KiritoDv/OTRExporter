#pragma once
#include "ZResource.h"
#include "ZArray.h"
#include "OTRExporter.h"
#include <Utils/BinaryWriter.h>

class OTRExporter_Array : public OTRExporter
{
public:
	virtual void Save(ZResource* res, fs::path outPath, BinaryWriter* writer) override;

};