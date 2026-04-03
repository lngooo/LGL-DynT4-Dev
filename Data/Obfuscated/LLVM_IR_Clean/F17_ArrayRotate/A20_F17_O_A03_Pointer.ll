define dso_local void @sR0(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %8 = load i32, i32* %5
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %55
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = srem i32 %13, %12
  store i32 %14, i32* %6
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = mul i64 %17, 4
  %19 = call noalias i8* @malloc(i64 %18)
  store i32* %20, i32** %7
  %21 = load i32*, i32** %7
  %23 = load i32*, i32** %4
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = mul i64 %26, 4
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 4 %22, i8* align 4 %24, i64 %27, i1 false)
  %28 = load i32*, i32** %4
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %35 = load i32, i32* %5
  %36 = load i32, i32* %6
  %37 = sub nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = mul i64 %38, 4
  call void @llvm.memmove.p0i8.p0i8.i64(i8* align 4 %29, i8* align 4 %34, i64 %39, i1 false)
  %40 = load i32*, i32** %4
  %41 = load i32, i32* %5
  %42 = load i32, i32* %6
  %43 = sub nsw i32 %41, %42
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %40, i64 %44
  %47 = load i32*, i32** %7
  %49 = load i32, i32* %6
  %50 = sext i32 %49 to i64
  %51 = mul i64 %50, 4
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 4 %46, i8* align 4 %48, i64 %51, i1 false)
  %52 = load i32*, i32** %7
  call void @free(i8* %53)
  br label %55
55:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare void @llvm.memmove.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1 immarg)
declare void @free(i8*)
