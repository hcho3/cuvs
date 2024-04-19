/*
 * Copyright (c) 2024, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cuvs/distance/distance_types.hpp>
#include <raft/core/device_mdspan.hpp>
#include <raft/core/resources.hpp>

namespace cuvs::distance {

/**
 * @defgroup pairwise_distance_runtime Pairwise Distances Runtime API
 * @{
 */
void pairwise_distance(raft::resources const& handle,
                       raft::device_matrix_view<float, int, raft::layout_c_contiguous> const x,
                       raft::device_matrix_view<float, int, raft::layout_c_contiguous> const y,
                       raft::device_matrix_view<float, int, raft::layout_c_contiguous> dist,
                       cuvs::distance::DistanceType metric,
                       float metric_arg = 2.0f);

void pairwise_distance(raft::resources const& handle,
                       raft::device_matrix_view<double, int, raft::layout_c_contiguous> const x,
                       raft::device_matrix_view<double, int, raft::layout_c_contiguous> const y,
                       raft::device_matrix_view<double, int, raft::layout_c_contiguous> dist,
                       cuvs::distance::DistanceType metric,
                       double metric_arg = 2.0f);

void pairwise_distance(raft::resources const& handle,
                       raft::device_matrix_view<float, int, raft::layout_f_contiguous> const x,
                       raft::device_matrix_view<float, int, raft::layout_f_contiguous> const y,
                       raft::device_matrix_view<float, int, raft::layout_f_contiguous> dist,
                       cuvs::distance::DistanceType metric,
                       float metric_arg = 2.0f);

void pairwise_distance(raft::resources const& handle,
                       raft::device_matrix_view<double, int, raft::layout_f_contiguous> const x,
                       raft::device_matrix_view<double, int, raft::layout_f_contiguous> const y,
                       raft::device_matrix_view<double, int, raft::layout_f_contiguous> dist,
                       cuvs::distance::DistanceType metric,
                       double metric_arg = 2.0f);

/** @} */  // end group pairwise_distance_runtime

}  // namespace cuvs::distance