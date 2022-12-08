<template>
<div class="Lavanderia">
<MenuLateral />
<EsquemaLavanderia msg="Lavanderia"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaLavanderia from '@/components/EsquemaLavanderia.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompLavanderia',
  components: {
    MenuLateral,
    EsquemaLavanderia
  }
}
</script>
