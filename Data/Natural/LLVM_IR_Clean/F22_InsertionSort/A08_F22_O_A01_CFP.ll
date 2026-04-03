define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 1, i32* %6
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp ne i32 %14, 3
  br i1 %15, label %16, label %69
16:
  %17 = load i32, i32* %5
  switch i32 %17, label %68 [
    i32 0, label %18
    i32 1, label %24
    i32 2, label %32
  ]
18:
  %19 = load i32, i32* %6
  %20 = load i32, i32* %4
  %21 = icmp slt i32 %19, %20
  %22 = zext i1 %21 to i64
  %23 = select i1 %21, i32 1, i32 3
  store i32 %23, i32* %5
  br label %68
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  store i32 %29, i32* %8
  %30 = load i32, i32* %6
  %31 = sub nsw i32 %30, 1
  store i32 %31, i32* %7
  store i32 2, i32* %5
  br label %68
32:
  br label %33
33:
  %34 = load i32, i32* %7
  %35 = icmp sge i32 %34, 0
  br i1 %35, label %36, label %44
36:
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %7
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32, i32* %8
  %43 = icmp sgt i32 %41, %42
  br label %44
44:
  %45 = phi i1 [ false, %33 ], [ %43, %36 ]
  br i1 %45, label %46, label %59
46:
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %7
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %52, i64 %55
  store i32 %51, i32* %56
  %57 = load i32, i32* %7
  %58 = add nsw i32 %57, -1
  store i32 %58, i32* %7
  br label %33
59:
  %60 = load i32, i32* %8
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %7
  %63 = add nsw i32 %62, 1
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %61, i64 %64
  store i32 %60, i32* %65
  %66 = load i32, i32* %6
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %6
  store i32 0, i32* %5
  br label %68
68:
  br label %13
69:
  ret void
}
