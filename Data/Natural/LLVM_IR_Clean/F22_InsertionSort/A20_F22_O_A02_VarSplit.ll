define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %87
16:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %5
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %6
  store i32 0, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %8
  br label %27
27:
  %28 = load i32, i32* %7
  %29 = load i32, i32* %8
  %30 = icmp sle i32 %28, %29
  br i1 %30, label %31, label %52
31:
  %33 = load i32, i32* %7
  %34 = load i32, i32* %8
  %35 = add nsw i32 %33, %34
  %36 = sdiv i32 %35, 2
  store i32 %36, i32* %9
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %9
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32, i32* %6
  %43 = icmp sgt i32 %41, %42
  br i1 %43, label %44, label %47
44:
  %45 = load i32, i32* %9
  %46 = sub nsw i32 %45, 1
  store i32 %46, i32* %8
  br label %50
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %7
  br label %50
50:
  br label %27
52:
  %54 = load i32, i32* %5
  %55 = sub nsw i32 %54, 1
  store i32 %55, i32* %10
  br label %56
56:
  %57 = load i32, i32* %10
  %58 = load i32, i32* %7
  %59 = icmp sge i32 %57, %58
  br i1 %59, label %62, label %60
60:
  br label %76
62:
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %10
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  %68 = load i32*, i32** %3
  %69 = load i32, i32* %10
  %70 = add nsw i32 %69, 1
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %68, i64 %71
  store i32 %67, i32* %72
  br label %73
73:
  %74 = load i32, i32* %10
  %75 = add nsw i32 %74, -1
  store i32 %75, i32* %10
  br label %56
76:
  %77 = load i32, i32* %6
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %7
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  store i32 %77, i32* %81
  %82 = load i32, i32* %5
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %5
  br label %12
87:
  ret void
}
