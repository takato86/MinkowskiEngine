// disable_nvtx.hpp
#pragma once
// NVTX を必ず無効化する（複数系統のガードを網羅）
#ifndef NVTX_DISABLE
#define NVTX_DISABLE 1
#endif
#ifndef NVTX3_ENABLED
#define NVTX3_ENABLED 0
#endif
#ifndef CUDF_NVTX
#define CUDF_NVTX 0
#endif
#ifndef CUDF_DISABLE_NVTX
#define CUDF_DISABLE_NVTX 1
#endif
