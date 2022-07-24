#include "g3dCore.h"
#include "gra3d/gra3d.h"
#include "logging/printing.h"

Vector4 * g3dGetTransformRef(G3DTRANSFORMSTATETYPE transform)
{
    if (scratchpad == nullptr)
    {
        printError(ENGINE_LOGGER, "g3dGetTransformRef", "g3d is not initalized yet");
    }
    if (G3DTRANSFORMSTATETYPE::G3DTS_PROJECTION < transform)
    {
        printError(ENGINE_LOGGER, "g3dGetTransformRef", "invlaid transform type");
    }
    return cRenderer.core->matrix.Matrix;
}