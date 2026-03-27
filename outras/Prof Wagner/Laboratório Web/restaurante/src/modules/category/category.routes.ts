import { Router } from "express";
import categoryController from "./category.controller.js";

const categoryRoutes = Router();

categoryRoutes.post("/", categoryController.create);
categoryRoutes.get("/", categoryController.findAll);
categoryRoutes.get("/:id", categoryController.findById);
categoryRoutes.put("/:id", categoryController.update);
categoryRoutes.delete("/:id", categoryController.delete);

export default categoryRoutes;