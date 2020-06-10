//
// Created by mathis on 10/06/2020.
//
#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Types.hpp"

/**
 * This files provides casting function between glm and Eigen.
 */
namespace ProjName::Core::Utils {

/**
 * Casts from Eigen::Matrix to glm::mat.
 * @tparam M - number of rows of the matrix.
 * @tparam N - number of columns of the matrix.
 * @tparam T - type of the elements in the matrix.
 * @param mat - Eigen::Matrix to be casted.
 * @return matrix as a glm::mat.
 */
template <int M, int N, typename T>
inline glm::mat<M, N, T> toGlm(const Eigen::Matrix<T, M, N> &mat);

/**
 * Casts from Eigen::Vector to glm::vec.
 * @tparam M - number of elements of the vector
 * @tparam T - type of the elements in the vector.
 * @param vec - Eigen::Vector to be casted.
 * @return vector as a glm::vec.
 */
template <int M, typename T>
inline glm::vec<M, T> toGlm(const Eigen::Matrix<T, M, 1> &vec);

/**
 * Casts from glm::mat to Eigen::Matrix.
 * @tparam M - number of rows of the matrix.
 * @tparam N - number of columns of the matrix.
 * @tparam T - type of the elements in the matrix.
 * @param mat - glm::mat to be casted.
 * @return matrix as an Eigen::Matrix.
 */
template <int M, int N, typename T>
inline Eigen::Matrix<T, M, N> toEigen(const glm::mat<M, N, T> &mat);

/**
 * Casts from glm::vec to Eigen::Vector.
 * @tparam M - number of elements of the vector.
 * @tparam T - type of the elements in the vector.
 * @param vec - glm::vec to be casted.
 * @return vector as an Eigen::Vector.
 */
template <int M, typename T>
inline Eigen::Matrix<T, M, 1> toEigen(const glm::vec<M, T> &vec);

}  // namespace ProjName::Core::Utils

#include "Adapters.inl"