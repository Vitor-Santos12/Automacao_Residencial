<template>
<div class="Quarto">
<MenuLateral />
<EsquemaESP32 msg="Quarto"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompQuarto',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
