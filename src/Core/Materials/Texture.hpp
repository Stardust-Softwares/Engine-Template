//
// Created by mathis on 09/05/2020.
//

#pragma once

#include <Core/OpenGL.hpp>
#include <Core/Utils/NonCopyable.hpp>
#include <array>
#include <string>

namespace stardust::core::mat {
/**
 * texture class.
 * loads an image into an opengl texture.
 */
class Texture : public utils::NonCopyable {
   public:
    /**
     * Base constructor.
     * @param name - name of the texture.
     */
    explicit Texture(std::string name) noexcept : m_id{0}, m_name{std::move_if_noexcept(name)} {}

    /**
     * 2D texture constructor.
     * @param name - name of the texture.
     * @param path - path of the picture file.
     */
    Texture(std::string name, std::string path);

    /**
     * 3D texture constructor.
     * @param name - name of the texture.
     * @param paths - paths of a picture for each faces.
     */
    Texture(std::string name, const std::array<std::string, 6> &paths);

    /**
     * Destructor.
     */
    ~Texture();

    /**
     * Move constructor.
     * @param other - texture to move.
     */
    Texture(Texture &&other) noexcept : m_id{other.m_id}, m_name{std::move_if_noexcept(other.m_name)} {
        other.m_isValid = false;
    }

    /**
     * Move assignment operator.
     * @param other - texture to move.
     * @return reference to this.
     */
    Texture &operator=(Texture &&other) noexcept;

    /**
     * Binds the texture to the current opengl GL_TEXTURE
     */
    void bind(GLenum textureType = GL_TEXTURE_2D) const;

    /**
     * Name getter.
     * @return texture's name.
     */
    [[nodiscard]] const std::string &name() const { return m_name; }

    /**
     * ID getter.
     * @return texture's ID.
     */
    [[nodiscard]] GLuint id() const { return m_id; }

    /**
     * ID reference getter.
     * @return reference to texture's ID.
     */
    GLuint &id() { return m_id; }

   private:
    GLuint m_id;
    std::string m_name;
    bool m_isValid{false};
};
}  // namespace stardust::core::mat
