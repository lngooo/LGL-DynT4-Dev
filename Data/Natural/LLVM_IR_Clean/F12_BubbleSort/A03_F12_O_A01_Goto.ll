define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  %14 = icmp sge i32 %11, %13
  br i1 %14, label %15, label %16
15:
  br label %67
16:
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %4
  %20 = load i32, i32* %5
  %21 = sub nsw i32 %19, %20
  %22 = sub nsw i32 %21, 1
  %23 = icmp sge i32 %18, %22
  br i1 %23, label %24, label %27
24:
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %5
  br label %10
27:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %33, i64 %36
  %38 = load i32, i32* %37
  %39 = icmp sgt i32 %32, %38
  br i1 %39, label %40, label %64
40:
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %6
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  %46 = load i32, i32* %45
  store i32 %46, i32* %7
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, 1
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %47, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %6
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  store i32 %52, i32* %56
  %57 = load i32, i32* %7
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %6
  %60 = add nsw i32 %59, 1
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %58, i64 %61
  store i32 %57, i32* %62
  br label %64
64:
  %65 = load i32, i32* %6
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %6
  br label %17
67:
  ret void
}
