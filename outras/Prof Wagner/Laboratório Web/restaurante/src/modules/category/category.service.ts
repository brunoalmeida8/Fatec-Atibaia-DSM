/* 
Papel do category.service.ts

Ele será responsável por:
    - criar categoria
    - listar categorias
    - buscar categoria por id
    - atualizar categoria
    - excluir categoria

Ou seja, concentra as operações e regras de negócio relacionadas ao modulo categoria. */

import Category from "./category.model.js";
import type {
  ICreateCategoryDTO,
  IUpdateCategoryDTO,
} from "./category.types.js";

class CategoryService {
  public async create(data: ICreateCategoryDTO) {
    const category = await Category.create({
      name: data.name,
      description: data.description ?? "",
      active: data.active ?? true,
    });

    return category;
  }

  public async findAll() {
    return await Category.find();
  }

  public async findById(id: string) {
    return await Category.findById(id);
  }

  public async update(id: string, data: IUpdateCategoryDTO) {
    return await Category.findByIdAndUpdate(id, data, {
      new: true,
      runValidators: true,
    });
  }

  public async delete(id: string) {
    return await Category.findByIdAndDelete(id);
  }
}

export default new CategoryService();