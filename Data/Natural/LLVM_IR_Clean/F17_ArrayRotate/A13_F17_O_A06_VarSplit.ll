define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %86
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %6
  %17 = srem i32 %16, %15
  store i32 %17, i32* %6
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = mul i64 %20, 4
  %22 = call noalias i8* @malloc(i64 %21)
  store i32* %23, i32** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %26
26:
  %27 = load i32, i32* %8
  %28 = load i32, i32* %9
  %29 = add nsw i32 %27, %28
  %30 = load i32, i32* %5
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %59
32:
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %8
  %35 = load i32, i32* %9
  %36 = add nsw i32 %34, %35
  %37 = load i32, i32* %6
  %38 = add nsw i32 %36, %37
  %39 = load i32, i32* %5
  %40 = srem i32 %38, %39
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %33, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %7
  %45 = load i32, i32* %8
  %46 = load i32, i32* %9
  %47 = add nsw i32 %45, %46
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %44, i64 %48
  store i32 %43, i32* %49
  %50 = load i32, i32* %9
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %9
  %52 = load i32, i32* %9
  %53 = icmp sge i32 %52, 5
  br i1 %53, label %54, label %58
54:
  %55 = load i32, i32* %9
  %56 = load i32, i32* %8
  %57 = add nsw i32 %56, %55
  store i32 %57, i32* %8
  store i32 0, i32* %9
  br label %58
58:
  br label %26
59:
  store i32 0, i32* %10
  br label %61
61:
  %62 = load i32, i32* %10
  %63 = load i32, i32* %5
  %64 = icmp slt i32 %62, %63
  br i1 %64, label %67, label %65
65:
  br label %80
67:
  %68 = load i32*, i32** %7
  %69 = load i32, i32* %10
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %10
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  store i32 %72, i32* %76
  br label %77
77:
  %78 = load i32, i32* %10
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %10
  br label %61
80:
  %81 = load i32*, i32** %7
  call void @free(i8* %82)
  br label %86
86:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
