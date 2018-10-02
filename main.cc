#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-register"
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif

#include "pxr/pxr.h"
#include "pxr/usd/sdf/layer.h"

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include <cstdio>
#include <cstdlib>
#include <iostream>

PXR_NAMESPACE_OPEN_SCOPE

PXR_NAMESPACE_CLOSE_SCOPE

int main(int argc, char **argv)
{
  PXR_NAMESPACE_USING_DIRECTIVE

  if (argc < 3) {
    std::cout << "Requires input.usda output.usdc" << std::endl;
    return EXIT_FAILURE;
  }

  std::string filepath = argv[1];

  auto layer = SdfLayer::FindOrOpen(filepath);

  std::string output_filename = argv[2];

  layer->Export(output_filename);

  return EXIT_SUCCESS;
}

