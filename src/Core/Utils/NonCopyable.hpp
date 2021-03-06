//
// Created by mathis on 10/06/2020.
//
#pragma once
#include <API.hpp>

namespace stardust::core::utils {

/** base class for any non-copyable object.
 *
 */
class ENGINE_API NonCopyable {
   public:
    /**
     * Constructor.
     */
    constexpr NonCopyable() noexcept = default;

    /**
     * Destructor.
     */
    ~NonCopyable() noexcept = default;

    /**
     * Move Constructor.
     */
    NonCopyable(NonCopyable &&) noexcept = default;

    /**
     * Move assignment operator.
     * @return this
     */
    NonCopyable &operator=(NonCopyable &&) noexcept = default;

    /// getting ready for C++20 !
    //[[nodiscard]] bool operator==(const NonCopyable &) const noexcept = default;

    /// getting ready for C++20 !
    //[[nodiscard]] bool operator==(NonCopyable &&) const noexcept = default;

    ///\exclude
    NonCopyable(const NonCopyable &) noexcept = delete;

    ///\exclude
    NonCopyable &operator=(const NonCopyable &) noexcept = delete;
};

}  // namespace stardust::core::utils