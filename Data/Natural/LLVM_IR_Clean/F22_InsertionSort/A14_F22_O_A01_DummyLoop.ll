define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %76
17:
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %8
  store i32 0, i32* %9
  br label %28
28:
  %29 = load i32, i32* %9
  %30 = icmp slt i32 %29, 1
  br i1 %30, label %33, label %31
31:
  store i32 5, i32* %6
  br label %64
33:
  br label %34
34:
  %35 = load i32, i32* %8
  %36 = icmp sge i32 %35, 0
  br i1 %36, label %37, label %45
37:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32, i32* %7
  %44 = icmp sgt i32 %42, %43
  br label %45
45:
  %46 = phi i1 [ false, %34 ], [ %44, %37 ]
  br i1 %46, label %47, label %60
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %8
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %8
  %55 = add nsw i32 %54, 1
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %53, i64 %56
  store i32 %52, i32* %57
  %58 = load i32, i32* %8
  %59 = add nsw i32 %58, -1
  store i32 %59, i32* %8
  br label %34
60:
  br label %61
61:
  %62 = load i32, i32* %9
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %9
  br label %28
64:
  %65 = load i32, i32* %7
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %8
  %68 = add nsw i32 %67, 1
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %66, i64 %69
  store i32 %65, i32* %70
  br label %73
73:
  %74 = load i32, i32* %5
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %5
  br label %11
76:
  ret void
}
